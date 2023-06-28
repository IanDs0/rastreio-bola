#include <Servo.h>

Servo meuservo;             // Cria o objeto servo para programação
 
int angulo = 0;             // Ajusta o ângulo inicial do Servo
int op = 0;                 // Seleção de quadrante 

void setup() {
  meuservo.attach(11);       // Declara o pino do servo
}
 
void loop() {

if (Serial.available()) {
    string python = Serial.read();
  
    Serial.print("Dados recebidos: ");
    Serial.println(python);

    op = stoi(python);

    Serial.print("Dados recebidos inteiros: ");
    Serial.println(op);
  }



switch(op){
	case(1){
		for (angulo = 90; angulo < 180; angulo += 5) {     // Executa movimentos no sentido horário
    		meuservo.write(angulo);                            // Altera sua velocidade de 5 em 5
   		delay(150);                                       // Cada velocidade funciona por 0,15 segundos
  		}
		
		meuservo.write(90);                                  // Para o servo motor
  		delay(500);                                         // Aguarda 1 segundos para continuar
		
		break;
	}

	case(2){
		for (angulo = 90; angulo < 135; angulo += 5) {     // Executa movimentos no sentido horário
		meuservo.write(angulo);                            // Altera sua velocidade de 5 em 5
    		delay(150);                                       // Cada velocidade funciona por 0,15 segundos
  		}
 
  		meuservo.write(90);                                  // Para o servo motor
  		delay(500);                                         // Aguarda 1 segundos para continuar
		
		break;
	}

	case(3){
		for (angulo = 90; angulo >= 45; angulo -= 5) {     // Executa movimentos no sentido anti horário
    		meuservo.write(angulo);                            // Altera sua velocidade de 5 em 5
    		delay(150);                                       // Cada velocidade funciona por 0,12 segundos
  		}
 
  		meuservo.write(90);                                  // Para o servo motor
  		delay(500);                                         // Aguarda 1 segundos para continuar
		
		break;
	}

	case(4){
		for (angulo = 90; angulo >= 0; angulo -= 5) {       // Executa movimentos no sentido anti horário
    		meuservo.write(angulo);                            // Executa o ângulo de 5 em 5 graus
    		delay(150);                                       // Cada velocidade funciona por 0,15 segundos
  		}
 
  		meuservo.write(90);                                  // Para o servo motor
  		delay(500);                                         // Aguarda 1 segundos para continuar
		
		break;
	}

}

}