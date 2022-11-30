let eye1,eye2,eye3,moon;
var isMoonClicked = false;

function setup() {
  createCanvas(1280, 720);
  noStroke();
  moon = new Moon(640,360);
  eye1 = new Eye(150,200,80,random(0,255),random(0,255),random(0,255));
  eye2 = new Eye(420,130,110,random(0,255),random(0,255),random(0,255));
  eye3 = new Eye(810,100,70,random(0,255),random(0,255),random(0,255));
  eye4 = new Eye(1100,130,130,random(0,255),random(0,255),random(0,255));
  eye5 = new Eye(400,350,100,random(0,255),random(0,255),random(0,255));
  
  eye6 = new Eye(960,330,90,random(0,255),random(0,255),random(0,255));
  eye7 = new Eye(230,600,150,random(0,255),random(0,255),random(0,255));
  eye8 = new Eye(560,575,55,random(0,255),random(0,255),random(0,255));
  eye9 = new Eye(860,530,110,random(0,255),random(0,255),random(0,255));
  eye10 = new Eye(1150,600,100,random(0,255),random(0,255),random(0,255));
  
}

function draw() {
  background(0);
  
  moon.display(mouseX,mouseY);
  
  if(isMoonClicked){
    eye1.update(mouseX, mouseY);
    eye2.update(mouseX, mouseY);
    eye3.update(mouseX, mouseY);
    eye4.update(mouseX, mouseY);
    eye5.update(mouseX, mouseY);
    eye6.update(mouseX, mouseY);
    eye7.update(mouseX, mouseY);
    eye8.update(mouseX, mouseY);
    eye9.update(mouseX, mouseY);
    eye10.update(mouseX, mouseY);
    eye1.displayEye();
    eye2.displayEye();
    eye3.displayEye();
    eye4.displayEye();
    eye5.displayEye();
    eye6.displayEye();
    eye7.displayEye();
    eye8.displayEye();
    eye9.displayEye();
    eye10.displayEye();  
  } else {
    eye1.displayStar();
    eye2.displayStar();
    eye3.displayStar();
    eye4.displayStar();
    eye5.displayStar(); 
    eye6.displayStar();
    eye7.displayStar();
    eye8.displayStar();
    eye9.displayStar();
    eye10.displayStar(); 
    
  }
}

function mouseClicked(){
  if(moon.isMouseInside(mouseX, mouseY)){
    isMoonClicked = !isMoonClicked;  
  }
}
