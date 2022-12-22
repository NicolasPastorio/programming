const nome = 'Juliana'
const idade = 2022 - 1981
const cidadeDeNascimento = 'São Paulo'

//forma convencional
let apresentacao = 'Meu nome é ' + nome + ', tenho ' + idade +
  ' anos de idade e nasci na cidade de ' + cidadeDeNascimento + '.'
console.log(apresentacao)
//utilizando template string
apresentacao = `Meu nome é ${nome}, tenho ${idade} anos de idade e
  nasci na cidade de ${cidadeDeNascimento}.`
console.log(apresentacao)
