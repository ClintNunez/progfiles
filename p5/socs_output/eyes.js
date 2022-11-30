function Eye(tx,ty,size,colorR,colorG,colorB){  
  this.x = tx;
  this.y = ty;
  this.size = size;
  this.colorR = colorR;
  this.colorG = colorG;
  this.colorB = colorB;
  this.angle = 0;
  
  this.update = function(mx, my) {
    this.angle = atan2(my - this.y, mx - this.x);
  };

  this.displayEye = function() {
    push();
    translate(this.x, this.y);
    
    // add opening eye
    bezier(-this.size,0,0,-this.size/1.5,0,-this.size/1.5,this.size,0);
    bezier(-this.size,0,0,this.size/1.5,0,this.size/1.5,this.size,0);
    
    // base circle for rotation
    fill(255);
    ellipse(0, 0, this.size, this.size);
    rotate(this.angle);
    // iris
    fill(this.colorR,this.colorG,this.colorB);
    // fill(colorR,colorG,colorB);

    ellipse(this.size/4,0,this.size / 2,this.size / 2);
    //pupil
    fill(0);
    ellipse(this.size/4,0,this.size/4,this.size/4);
    pop();
  };
  
  this.displayStar = function() {
    /*Insert Star code
      color of star should be the same as the iris,
      size should be the same as the iris,
    */

    push();
    translate(this.x,this.y);
    // fill random does not work unless there is a constant
    fill(this.colorR,this.colorG,this.colorB);
    beginShape();
    var r=0,x=0,y=0
    for(var a=0;a<TWO_PI;a+=0.01){
      const r = this.size/40;
      const x = r * 16 * pow(sin(a),3);
      const y = r * 16 * pow(cos(a),3);
      vertex(x,y);
    }
    endShape();
    
    pop();
  };
}
