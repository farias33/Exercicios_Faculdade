def CriarDictNomes(string):
    dicionario = dict()

    for s in string:
        aparições = 0;
        temp = s

        for t in string:
            if t == temp:
                aparições += 1


        dicionario [temp] = aparições

    return dicionario

print(CriarDictNomes('joao'))