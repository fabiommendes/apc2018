#
# Ex. 1: Conta de energia
# =======================
#
# A função conta_de_energia(consumo, tipo) deve retornar o valor da conta de 
# energia em função da faixa de consumo e tipo de estabelecimento:
#
#   Tipo            | Faixa (kWh) | Valor por kWh
#   ================+=============+===============
#   residencial (r) | até 500     | 0.42
#                   | 500+        | 0.65
#                   |             |
#   comercial (c)   | até 1000    | 0.55
#                   | 1000+       | 0.60
#                   |             |
#   industrial (i)  | até 5000    | 0.55
#                   | 5000+       | 0.50
#   
# A variável tipo deve ser igual a um dos três valores de string "r", "c" ou 
# "i" e a variável consumo corresponde a um número que representa o consumo
# em kWh
#
def conta_de_energia(consumo: float, tipo: str) -> str:
    """
    Retorna o valor da conta de energia.
    """
    
    # seu código aqui!
    return 42.0


#
# Ex. 2: Estatísticas
# ===================
#
# A função estatisticas(numeros) recebe uma lista de números e retorna uma tupla
# com a soma de todos os valores e a média deles. Ex.:
#
#   estatisticas([1, 2, 3, 4]) == (10.0, 2.5)
#
def estatisticas(numeros: list) -> (float, float):
    """
    Retorna a (soma, media) dos números na lista de entrada
    """
    # seu código aqui!
    soma = 1
    media = 3
    return soma, media

if __name__ == '__main__':
    assert estatisticas([1, 2, 3, 4]) == (10.0, 2.5)
    assert estatisticas([0, 0, 0]) == (0, 0)
    assert estatisticas([]) == (0, 0)
    
    


def estatisticas(numeros):
    soma = sum(numeros)
    e = 1e-50
    return soma, soma / (len(numeros) + e)
