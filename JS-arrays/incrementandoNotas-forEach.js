const notas = [10, 9.5, 8, 7, 6]

notas.forEach(function (nota, indice){
  notas[indice] = nota + 1
})

console.log(notas)
