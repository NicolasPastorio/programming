console.log('Trabalhando com condicionais...')
const listaDeDestinos = new Array(
  'Salvador',
  'São Paulo',
  'Rio de Janeiro'
)
const idadeComprador = 12
const estaAcompanhada = false
const temPassagemComprada = true

console.log('Destinos possíveis:')
console.log(listaDeDestinos)

// if(idadeComprador >= 18){
//   console.log('Comprador amior de idade.')
//   listaDeDestinos.splice(1, 1)//removendo item
// }else{
//   //A pessoa é menor de idade
//   if(estaAcompanhada){
//     console.log('Comprador está acompanhado!')
//     listaDeDestinos.splice(1, 1)
//   }else{
//       console.log('Não é maior de idade, então as passagens não podem ser adquiridas.')
//   }
// }

if(idadeComprador >= 18 || estaAcompanhada == true){
  console.log('Boa viagem!')
  listaDeDestinos.splice(2, 1)
}else{
  console.log('Não é maior de idade e não posso vender o bilhete.')
}

console.log('Embarque: \n\n')
if(idadeComprador >= 18 && temPassagemComprada){
  console.log('Boa viagem!')
}else{
  console.log('Você não pode embarcar!')
}

console.log(listaDeDestinos)
// //operadores lógicos
// console.log(idadeComprador > 18)//true
// console.log(idadeComprador < 18)//false
// console.log(idadeComprador <= 18)//false
// console.log(idadeComprador >= 18)//true
// console.log(idadeComprador == 18)//false
