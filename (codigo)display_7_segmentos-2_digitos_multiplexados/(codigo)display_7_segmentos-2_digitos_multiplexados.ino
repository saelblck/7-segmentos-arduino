// feito por: Samuel A.
// data: 17/07/22

#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define dp 9
#define chaveDisplay1 12
#define chaveDisplay2 13

int valor, decimal, unidade;

// prototipos de funções
void offDisplay(int val); //limpa o display, com o paramêntro 0: limpa os dois, 1: limpa o primeiro e 2: limpa o 2;
void printDisplay (int disp1, int disp2); //printa os valores definido pelos paramêntros
void deciUnit(int val); //separa os valores recebidos em decimais e unitarios

void setup()
{
  Serial.begin(9600);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  pinMode(chaveDisplay1, OUTPUT);
  pinMode(chaveDisplay2, OUTPUT);

  //zera as saidas
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
  digitalWrite(chaveDisplay1, LOW);
  digitalWrite(chaveDisplay2, LOW);
}

void loop()
{
  if (Serial.available() > 0) {
    valor = Serial.parseInt();
    deciUnit(valor);

    Serial.print(decimal);
    Serial.println(unidade);
  }

  // obrigatorio estar no loop() para funcionar bem
  printDisplay(decimal, unidade);
}

void offDisplay(int val) {
  switch (val) {
    case 0:
      digitalWrite(chaveDisplay1, LOW);
      digitalWrite(chaveDisplay2, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      break;
    case 1:
      digitalWrite(chaveDisplay1, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      break;
    case 2:
      digitalWrite(chaveDisplay2, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, HIGH);
      break;
  }
}// offDisplay END

void printDisplay (int disp1, int disp2) {
  switch (disp1) {
    case 0:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 1:
      offDisplay(2);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 2:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(g, LOW);
      digitalWrite(e, LOW);
      digitalWrite(d, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 3:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 4:
      offDisplay(2);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 5:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 6:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 7:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 8:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
    case 9:
      offDisplay(2);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay1, HIGH);
      delay(10);
      offDisplay(1);
      break;
  }

  switch (disp2) {
    case 0:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 1:
      offDisplay(1);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 2:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(g, LOW);
      digitalWrite(e, LOW);
      digitalWrite(d, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 3:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 4:
      offDisplay(1);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 5:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 6:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 7:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 8:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
    case 9:
      offDisplay(1);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(chaveDisplay2, HIGH);
      delay(10);
      offDisplay(2);
      break;
  }
}// printDisplay END

void deciUnit(int val) {
  decimal = val / 10;
  unidade = val - (decimal * 10);
}// deciUnit END