def recebe_nome_e_nota(dicionario):
    ternario = True
    while ternario:
        nome = input("Qual o nome do aluno: ")
        if nome == '0':
            ternario = False
            break
        nota = float(input("Qual a nota deste aluno: "))


        if nome in dicionario:
            print("Você deseja realizar uma alteração?")
            decisao = input()

            if decisao == 's':
                print("Qual a nova nota: ")
                dicionario[nome] = input()
                continue
            
            else:
                continue

        dicionario[nome] = nota

    return dicionario

dicionario = dict()
print(recebe_nome_e_nota(dicionario))
