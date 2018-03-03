#include "LiquidCrystal.h" //ajout de la librairie

#define rsPin 8
#define rwPin 7
#define enaPin 6
#define data1Pin 5
#define data2Pin 4
#define data3Pin 3
#define data4Pin 2

//Vérifier les broches !
LiquidCrystal lcd(rsPin, rwPin,enaPin, data1Pin,data2Pin,data3Pin,data4Pin); //liaison 4 bits de données
 
void setup()
{
   lcd.begin(16,1); //utilisation d'un écran 16 colonnes et 2 lignes
   lcd.write("Salut "); //petit test pour vérifier que tout marche
}
 
void loop() {}
