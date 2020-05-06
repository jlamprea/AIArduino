# AIArduino
 AI con arduino
 Se utiliza un Arduino UNO con modulo Bluetooth HC05 para comunicarse con el smartphone Android.
 La APP es ArdVisionTrack la cual via Bluetooth entrega los Label " Etiquetas" y las coordenadas X,Y del centro.
 Detecta con Tensorflow Lite objetos
 Detecta con OpenCV colores, circulos, Track colores y lineas.
 
 Se hace una alarma para activar el pin 13 del arduino cuando detecte una persona, etiqueta "person". y se imprime 
 por puerto serial todo los objetos y coordenadas que recibe del smartphone.
 
