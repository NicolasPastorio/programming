const notas = [10, 6, 8]

notas.push(7)
// notas[notas.length] = 7

let somaDasNotas = 0
for(var i = 0; i < notas.length; i++){
  somaDasNotas += notas[i]
}
let media = somaDasNotas / notas.length

console.log(media)
