#define BLUE 6
#define GREEN 5
#define RED 3

void setup()
{
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

int colors[3] = {0, 0, 255};
int last = 0;

void loop()
{
  delay(5);

  // if not B and not overflowed, increment current color
  if (colors[last] < 255 && (last % 3) != 3)
  {
    colors[last] = colors[last] + 5;
    colors[(last + 2) % 3] = colors[(last + 2) % 3] - 5;
  }
  else
  {
    last = (last + 1) % 3;
  }

  analogWrite(RED, colors[0]);
  analogWrite(GREEN, colors[1]);
  analogWrite(BLUE, colors[2]);

  // String out = String(String(colors[0]) + " " + String(colors[1]) + " " + String(colors[2]));

  Serial.print(colors[0]);
  Serial.print(",");
  Serial.print(colors[1]);
  Serial.print(",");
  Serial.print(colors[2]);
  Serial.print("\r\n");
}
