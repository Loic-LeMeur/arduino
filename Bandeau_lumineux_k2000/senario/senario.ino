//*************** FONCTION LOOP = Boucle sans fin = coeur du programme *************
// la fonction loop() s'exécute sans fin en boucle aussi longtemps que l'Arduino est sous tension
void loop(){ // debut de la fonction loop()
// --- ici instructions à exécuter par le programme principal --- 
// L'aller
digitalWrite(LED_1,HIGH); // met la broche au niveau haut (5V) – allume la LED_1
delay(time/2); // pause de 75 millisecondes (ms)
digitalWrite(LED_1,LOW); // met la broche au niveau bas (0V) – éteint la LED_1

digitalWrite(LED_2,HIGH); // met la broche au niveau haut (5V) – allume la LED_2
delay(time); // pause de 150 millisecondes (ms)
digitalWrite(LED_2,LOW); // met la broche au niveau bas (0V) – éteint la LED_2

digitalWrite(LED_3,HIGH); // met la broche au niveau haut (5V) – allume la LED_3
delay(time); // pause de 150 millisecondes (ms)
digitalWrite(LED_3,LOW); // met la broche au niveau bas (0V) – éteint la LED_3

digitalWrite(LED_4,HIGH); // met la broche au niveau haut (5V) – allume la LED_4
delay(time); // pause de 150 millisecondes (ms)
digitalWrite(LED_4,LOW); // met la broche au niveau bas (0V) – éteint la LED_4

digitalWrite(LED_5,HIGH); // met la broche au niveau haut (5V) – allume la LED_5
delay(time); // pause de 150 millisecondes (ms)
digitalWrite(LED_5,LOW); // met la broche au niveau bas (0V) – éteint la LED_5

// Le retour
digitalWrite(LED_4,HIGH); // met la broche au niveau haut (5V) – allume la LED_4
delay(time); // pause de 150 millisecondes (ms)
digitalWrite(LED_4,LOW); // met la broche au niveau bas (0V) – éteint la LED_4

digitalWrite(LED_3,HIGH); // met la broche au niveau haut (5V) – allume la LED_3
delay(time); // pause de 150 millisecondes (ms)
digitalWrite(LED_3,LOW); // met la broche au niveau bas (0V) – éteint la LED_3

digitalWrite(LED_2,HIGH); // met la broche au niveau haut (5V) – allume la LED_2
delay(time); // pause de 150 millisecondes (ms)
digitalWrite(LED_2,LOW); // met la broche au niveau bas (0V) – éteint la LED_2

digitalWrite(LED_1,HIGH); // met la broche au niveau haut (5V) – allume la LED_1
delay(time/2); // pause de 75 millisecondes (ms)
digitalWrite(LED_1,LOW); // met la broche au niveau bas (0V) – éteint la LED_1

} // fin de la fonction loop()
