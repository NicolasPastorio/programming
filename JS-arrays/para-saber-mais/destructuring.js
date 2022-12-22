const numerosPares = [2, 4, 6]
const numerosImpares = [1, 3, 5]

// const numeros = [numerosPares, numerosImpares]
const numeros = [...numerosPares, ...numerosImpares]
const [num1, num2, ...resto] = [1, 2, 3, 4, 5, 6]
const [nome1 = 'Ju'] = []

const pessoa = {
  nome: 'Ju',
  idade: 25
}
const pessoaComTelefone = {
  ...pessoa, telefone: 9849050004
}

// const nome = pessoa.nome
const { nome } = pessoa

console.log(nome)

// function imprimeDados(dados){
//   const { nome, idade } = dados
//   console.log(nome, idade)
// }

function imprimeDados({ nome, idade }){
  console.log(nome, idade)
}
imprimeDados(pessoa)
