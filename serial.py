import serial

# Configurações da porta serial
porta_serial = 'COM3'  # Substitua pela porta serial correta
velocidade_serial = 9600  # Substitua pela velocidade correta

# Criação do objeto Serial
arduino = serial.Serial(porta_serial, velocidade_serial)

dados = "Hello, Arduino!"
arduino.write(dados.encode())