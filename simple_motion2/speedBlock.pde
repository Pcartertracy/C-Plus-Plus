void speedBlock(float w, float h) {

  rect(x, y, w, h);
  x += spdX;
  y += spdY;

  if (x > width-w) {
    spdX *= -1;
    // (spdX = spdX*-1)
  }
  if (x < 0) {
    spdX *= -1;
    // (spdX = spdX*-1)
  }

  if (y > height-h) {
    spdY *= -1;
    // (spdX = spdX*-1)
  }
  if (y < 0) {
    spdY *= -1;
    // (spdX = spdX*-1)
  }
}

