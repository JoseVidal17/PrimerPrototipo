
int datos=0;
int posicion;
int datanterior =0;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  if (datanteior != datos)
  datos = analogRead(34);
  posicion = map(datos,0,4095,0,100);
  Serial.println(posicion);
 
}
