// console.log(`Trabalhando com listas`)
// const salvador = `Salvador`
// const saoPaulo = `São Paulo`
// const rioDeJaneiro = `Rio de Janeiro`
//
// console.log('Destinos possíveis:')
// console.log(salvador, saoPaulo, rioDeJaneiro)

const listaDeDestinos = new Array(
  `Salvador`,
  `São Paulo`,
  `Rio de Janeiro`
)
//método para adicionar um item à lista
listaDeDestinos.push(`Curitiba`)
console.log('Destinos possíveis:')
console.log(listaDeDestinos)

//método para remover um ítem da lista
listaDeDestinos.splice(1,1)
console.log(listaDeDestinos)
//exibindo o segundo elemento do Array
console.log(listaDeDestinos[1], listaDeDestinos[0])
