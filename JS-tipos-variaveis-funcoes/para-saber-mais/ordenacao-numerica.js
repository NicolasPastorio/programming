//https://www.alura.com.br/artigos/ordenacao-de-numeros-no-javascript-nao-funciona
var lista = [10, 1, 5, 9, 8, 12, 15]
console.log(lista.sort())

// function comparaNumeros(a, b){
//   if(a == b)
//     return 0
//   if(a < b)
//     return -1
//   if(a > b)
//     return 1
// }
// console.log(lista.sort(comparaNumeros))
console.log(lista.sort((a, b) => a - b))
