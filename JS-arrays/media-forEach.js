const notas = [10, 6.5, 8, 7.5]

let total = 0

// notas.forEach(function(){})
//parâmetros do forEach: (elemento, índice do elemento)
notas.forEach(function (elemento, indice){
  total += elemento
  console.log(indice)
})

const media = total/notas.length

console.log(`A média das notas é ${media}`)
