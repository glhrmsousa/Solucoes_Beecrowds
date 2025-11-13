cont = 0
while True:
    n = int(input(""))
    if n == 0:
        break
    
    roupas = {'branco P': [], 
          'branco M': [], 
          'branco G': [],
        'vermelho P': [], 
        'vermelho M': [], 
        'vermelho G': []}

    for c in range(0, n, 1):
        nome = str(input(""))
        camisa = str(input("")).strip()
        roupas[camisa].append(nome)

    if cont > 0:
        print('')
        
    for tipo, nomes in roupas.items():
        if nomes:
            for nome in sorted(nomes):
                print(f'{tipo} {nome}')
    del(roupas)
    cont += 1