rep = int(input(""))

while rep > 0:
    soma = dir = cont = 0
    sequencia = str(input(""))

    for c in range(0, len(sequencia)):
        if sequencia[c] == '<':
            soma += 1
        if sequencia[c] == '>':
            if soma >= 1:
                cont += 1
                soma -= 1
    print(cont)
    rep -= 1