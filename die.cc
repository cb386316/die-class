#​include​​<iostream>
#​include​​<fstream>
#​include​​<cstdlib>
#​include​​"die.h"using​​namespace​​std​;
//ConstructorsDie::Die​(){ 
​//default 6 sides    
numSides = ​6​;​srand​(​time​(​NULL​));    
faceValue = ​rand​() % numSides + ​1​;
}Die::Die​(​int​ newNumSides){
​if​ (newNumSides > ​1​) {        numSides = newNumSides;    
}​else​ {        
numSides = ​6​;   
}​srand​(​time​(​NULL​));  

faceValue = ​rand​() % numSides + ​1​;
}//settersvoid​​Die::setNumSides​(​int​ newNumSides){​if​ (newNumSides > ​1​) { 
numSides = newNumSides; 
}}//gettersint​​Die::getFaceValue​(){​return​ faceValue;}int​​Die::getNumSides​(){​return​ numSides;
}//helper functionsint​​Die::roll​(){    faceValue = ​rand​() % numSides + ​1​;
​return​ faceValue;}ostream& ​operator​ <<(ostream &out, ​const​ Die &d){    out << d.faceValue;
​return​ out;
}
