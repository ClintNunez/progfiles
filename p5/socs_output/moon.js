function Moon(tx,ty){
  this.x = tx;
  this.y = ty;
  const centerX = 640;
  const centerY = 360;
  var yellowVal;
  
  this.isMouseInside = function(mx,my) {
    if(mx >= centerX-100 && mx <= centerX+100 && my >= centerY-100 && my <= centerY+100)
      return true;
  }
  
  this.display = function(mx,my) {
    // moon base
    push();
    translate(this.x,this.y);
    yellowVal = 90 + (abs(this.x-mx)+abs(this.y-my))/9; 

    fill(255,252, yellowVal);

    ellipse(0,0,200,200);
    // spots
    fill(246,190,0);
    ellipse(20,20,30,30);
    ellipse(-60,50,10,15);
    ellipse(20,20,30,30);
    ellipse(-50,-20,65,55);
    ellipse(50,-65,35,35);
    ellipse(-40,-45,30,30);
    ellipse(40,-50,35,25);
    ellipse(40,45,60,60);
    
    pop();
  }
}
