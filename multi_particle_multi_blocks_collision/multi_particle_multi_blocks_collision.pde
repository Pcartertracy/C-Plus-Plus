int blockCount = 70;
float[] x, y;
float[] w, h;

int pCount = 70;
float[] px = new float [pCount];
float[] py = new float [pCount];
float[] pr = new float [pCount];
float[] spdX = new float [pCount];
float[] spdY = new float [pCount];


void setup() {
  size(600, 600);
  noStroke();
  // initialize array lengths
  x = new float[blockCount];
  y = new float[blockCount];
  w = new float[blockCount];
  h = new float[blockCount];

  for (int i=0; i<blockCount; i++) {
    x[i] = random(10, width-10);
    y[i] = random(10, height-10);
    w[i] = random(5, 20);
    h[i] = random(5, 20);
  }

  for (int i=0; i<pCount; i++) {
    px[i] = width/2;
    py[i] = 10;
    pr[i] = random(2, 6);
    spdX[i] = random(-.2, .2);;
    spdY[i] = 0;
  }
}
void draw() {
  //background(255);
  fill(0, 2);
  rect(0, 0, width, height);
  fill(255);
  for (int i=0; i<pCount; i++) {
    // move particle
    px[i]+=spdX[i];
    spdY[i] += .03;
    py[i]+=spdY[i];
    ellipse(px[i], py[i], pr[i]*2, pr[i]*2);

    // wall collision code

    if (px[i]>width-pr[i]) {
      px[i]=width-pr[i];
      spdX[i]*=-1;
    } 
    else if (px[i]<pr[i]) {
      px[i] = pr[i];
      spdX[i]*=-1;
    }

    else  if (py[i]>height-pr[i]) {
      py[i]=height-pr[i];
      spdY[i]*=-1;
    } 
    else if (py[i]<pr[i]) {
      py[i] = pr[i];
      spdY[i]*=-1;
    }

    for (int j=0; j<blockCount; j++) {
      // draw blocks
      rect(x[j], y[j], w[j], h[j]);
      // obstacle colljsjon

      // blcok detectjon
      // left edge
      if ( px[i] > x[j]-pr[i] && px[i] < x[j] + w[j]/2 && 
        py[i] > y[j] && py[i] < y[j] + h[j] ) {
        px[i] = x[j]-pr[i];
        spdX[i] *= -1;
      } 
      else // rjght edge 
      if ( px[i] < x[j]+w[j]+pr[i] && px[i] > x[j] + w[j]/2 && 
        py[i] > y[j] && py[i] < y[j] + h[j] ) {
        px[i] = x[j]+w[j]+pr[i];
        spdX[i] *= -1;
      }

      // top edge
      if ( py[i] > y[j]-pr[i] && py[i] < y[j] + h[j]/2 && 
        px[i] > x[j] && px[i] < x[j] + w[j] ) {
        py[i] = y[j]-pr[i];
        spdY[i] *= -1;
      } 
      else // bottom edge 
      if ( py[i] < y[j]+h[j]+pr[i] && py[i] > y[j] + h[j]/2 && 
        px[i] > x[j] && px[i] < x[j] + w[j] ) {
        py[i] = y[j]+h[j]+pr[i];
        spdY[i] *= -1;
      }
    }
  }
}

