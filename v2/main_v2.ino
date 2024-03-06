// JUEGO DE MEMORIA
// v2.0 
// Versión mejorada para acreditación EUR-ACE
// Mejora en velocidades de encendido y apagado de leds durante secuencia
// 2023/08/07

// PINES ARDUINO
#define BUZZER 1
#define TRIG1 6
#define ECHO1 7
#define TRIG2 8
#define ECHO2 9
#define TRIG3 10
#define ECHO3 11
#define TRIG4 12
#define ECHO4 13
#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5

// MELODIAS
int melodia[] = {2600, 2600, 2300, 2300, 2080};
int duracionNotas[] = {8, 4, 8, 4, 2};
#define MELODIA_LED1 1950
#define MELODIA_LED2 2080
#define MELODIA_LED3 2300
#define MELODIA_LED4 2600

// PARAMETROS DE JUEGO
int nivelActual = 1;
int velocidad = 500;      // tiempo que se muestra encendido cada led durante el juego
int espera = 500;         // tiempo de espera entre el apagado de un led y el encendido de otro
int distanciaSensor = 9;  // distancia minima de activacion de sensores ultrasonicos en cm.
const int NIVEL_MAX = 50; // nivel maximo de juego
int secuencia[NIVEL_MAX];
int secuenciaUsuario[NIVEL_MAX];
int maxpunt = 0;


void melodiaError()
{
  for (int i = 0; i < 5; i++)
  {
    int duracionNota = 1800 / (duracionNotas[i]);
    tone(BUZZER, melodia[i], duracionNota);
    int pausaEntreNotas = duracionNota * 1.30;
    delay(pausaEntreNotas);
    noTone(BUZZER);
  }
}

void secuenciaError()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  melodiaError();
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  delay(1000);
  nivelActual = 1;
  if (nivelActual > maxpunt)
  {
    maxpunt = nivelActual;
  }
  velocidad = 500;
}

void secuenciaCorrecta()
{
  if (nivelActual < NIVEL_MAX)
    ;
  nivelActual++;
  if (velocidad > 200)
  {
    velocidad -= 10;
  }
  if (espera > 0)
  {
    espera -= 50;
  }
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  delay(200);
}

int leerDistancia(int TRIG, int ECHO)
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  int t = pulseIn(ECHO, HIGH);
  int d = t / 58;
  return d;
}

void muestraSecuencia()
{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);

  for (int i = 0; i < nivelActual; i++)
  {
    if (secuencia[i] == LED1)
    {
      tone(BUZZER, MELODIA_LED1);
      digitalWrite(LED1, HIGH);
      delay(velocidad);
      noTone(BUZZER);
      digitalWrite(LED1, LOW);
    }
    if (secuencia[i] == LED2)
    {
      tone(BUZZER, MELODIA_LED2);
      digitalWrite(LED2, HIGH);
      delay(velocidad);
      noTone(BUZZER);
      digitalWrite(LED2, LOW);
    }
    if (secuencia[i] == LED3)
    {
      tone(BUZZER, MELODIA_LED3);
      digitalWrite(LED3, HIGH);
      delay(velocidad);
      noTone(BUZZER);
      digitalWrite(LED3, LOW);
    }
    if (secuencia[i] == LED4)
    {
      tone(BUZZER, MELODIA_LED4);
      digitalWrite(LED4, HIGH);
      delay(velocidad);
      noTone(BUZZER);
      digitalWrite(LED4, LOW);
    }
    delay(espera);
  }
}

void leeSecuencia()
{
  int flag = 0;
  for (int i = 0; i < nivelActual; i++)
  {
    flag = 0;
    while (flag == 0)
    {
      if (leerDistancia(TRIG1, ECHO1) <= distanciaSensor)
      {
        digitalWrite(LED1, HIGH);
        tone(BUZZER, MELODIA_LED1);
        delay(velocidad);
        noTone(BUZZER);
        secuenciaUsuario[i] = LED1;
        flag = 1;
        delay(200);
        if (secuenciaUsuario[i] != secuencia[i])
        {
          secuenciaError();
          return;
        }
        digitalWrite(LED1, LOW);
      }
      if (leerDistancia(TRIG2, ECHO2) <= distanciaSensor)
      {
        digitalWrite(LED2, HIGH);
        tone(BUZZER, MELODIA_LED2);
        delay(velocidad);
        noTone(BUZZER);
        secuenciaUsuario[i] = LED2;
        flag = 1;
        delay(200);
        if (secuenciaUsuario[i] != secuencia[i])
        {
          secuenciaError();
          return;
        }
        digitalWrite(LED2, LOW);
      }
      if (leerDistancia(TRIG3, ECHO3) <= distanciaSensor)
      {
        digitalWrite(LED3, HIGH);
        tone(BUZZER, MELODIA_LED3);
        delay(velocidad);
        noTone(BUZZER);
        secuenciaUsuario[i] = LED3;
        flag = 1;
        delay(200);
        if (secuenciaUsuario[i] != secuencia[i])
        {
          secuenciaError();
          return;
        }
        digitalWrite(LED3, LOW);
      }
      if (leerDistancia(TRIG4, ECHO4) <= distanciaSensor)
      {
        digitalWrite(LED4, HIGH);
        tone(BUZZER, MELODIA_LED4);
        delay(velocidad);
        noTone(BUZZER);
        secuenciaUsuario[i] = LED4;
        flag = 1;
        delay(200);
        if (secuenciaUsuario[i] != secuencia[i])
        {
          secuenciaError();
          return;
        }
        digitalWrite(LED4, LOW);
      }
    }
    while (
        leerDistancia(TRIG1, ECHO1) <= distanciaSensor ||
        leerDistancia(TRIG2, ECHO2) <= distanciaSensor ||
        leerDistancia(TRIG3, ECHO3) <= distanciaSensor ||
        leerDistancia(TRIG4, ECHO4) <= distanciaSensor)
    {
    }
  }
  secuenciaCorrecta();
}

void generaSecuencia()
{
  randomSeed(millis());
  for (int i = 0; i < NIVEL_MAX; i++)
  {
    secuencia[i] = random(2, 6);
  }
}

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(TRIG1, OUTPUT);
  pinMode(TRIG2, OUTPUT);
  pinMode(TRIG3, OUTPUT);
  pinMode(TRIG4, OUTPUT);
  pinMode(ECHO1, INPUT);
  pinMode(ECHO2, INPUT);
  pinMode(ECHO3, INPUT);
  pinMode(ECHO4, INPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void loop()
{
  if (nivelActual == 1)
  {
    generaSecuencia();
  }
  muestraSecuencia();
  leeSecuencia();
}