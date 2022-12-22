// https://www.alura.com.br/artigos/formatando-numeros-no-javascript
function ganhoPorHora(salario, horasTrabalhadasNoMes){
  const salarioHora = (salario / horasTrabalhadasNoMes)
  // return Math.round(salarioHora)
  // return salarioHora.toFixed(2)
  const formatado = salarioHora.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})

  return formatado
}

let resultado = ganhoPorHora(3000, 176)
console.log(resultado)

let valor = Math.ceil(11.123)
console.log(valor)
valor = Math.floor(11.123)
console.log(valor)
