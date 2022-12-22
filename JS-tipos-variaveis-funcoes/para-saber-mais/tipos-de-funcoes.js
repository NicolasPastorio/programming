//Função sem retorno e sem parâmetro
function cumprimentar(){
  console.log('Oi gente!')
}
cumprimentar()

//Função sem retorno e com parâmetro
function cumprimentaPessoa(pessoa){
  console.log(`Oi, ${pessoa}!`)
}
cumprimentaPessoa('Helena')

//Função com retorno e sem parâmetro
function cumprimentando(){
  return 'Oi gente!'
}
function cumprimentandoPessoas(nomePessoa){
  console.log(`${cumprimentando()} Meu nome é ${nomePessoa}`)
}
cumprimentandoPessoas('Paula')

//Função com retorno e mais de um parâmetro
function operacaoMatematica(numero1, numero2, numero3){
  return numero1 + numero2 + numero3
}
console.log(operacaoMatematica(15, 30, 45))

// momento em que a função é definida
// function nomeDaFuncao(parâmetros)
// execução da função
// nomeDaFuncao(argumentos)
