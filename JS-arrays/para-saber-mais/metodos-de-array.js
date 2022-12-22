const lista01 = ['banana', 'maçã', 'abacaxi', 'caju', 'laranja']
const lista02 = ['abacate', 'pera', 'uva', 'kiwi', 'melancia']
//método concat()
//une dois arrays
const listaCompleta = lista01.concat(lista02)
//retira o último elemento do array
listaCompleta.pop()
//retira o primeiro elemento do array
listaCompleta.shift()
//adiciona o elemento passado como parâmetro à
//última posição do array
listaCompleta.push('melancia')
//adiciona o elemento passado como parâmetro à
//primeira posição do array
listaCompleta.unshift('banana')
//inverte a ordem dos elementos do array
listaCompleta.reverse()

//copia uma parte do array para outro array
const lista03 = listaCompleta.slice(3, 7)
//classifica os elementos do array em order
//alfabética
listaCompleta.sort()
//remove um ou mais elementos do array.
//recebe dois parâmetros, o inicial e o final,
//removendo os elementos compreendidos entre esse
//intervalo
listaCompleta.splice(1, 3)

console.log('------------Lista completa------------')
console.log(listaCompleta)
console.log('-------------Terceira lista-----------')
console.log(lista03)
