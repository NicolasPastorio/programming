// ação do botão do formulário
var botaoAdicionar = document.querySelector('#adicionar-paciente')
botaoAdicionar.addEventListener('click', function(evento){
  evento.preventDefault()

  var form = document.querySelector('#form-adiciona')

  var paciente = obtemPacienteDoFormulario(form)

  // validando values da tr
  var erros = validaPaciente(paciente)
  console.log(erros)
  if(erros.length > 0){
    exibeMensagensDeErro(erros)
    return
  }

  adicionaPacienteNaTabela(paciente)

  form.reset()
  var mensagensErro = document.querySelector('#mensagens-erro')
  mensagensErro.innerHTML = ''
})

function adicionaPacienteNaTabela(paciente){
  // cria <tr>
  var pacienteTr = montaTr(paciente)

  // pegando o <tbody> e colocando o <tr> dentro dele
  var tabela = document.querySelector('#tabela-pacientes')
  tabela.appendChild(pacienteTr)
}

function exibeMensagensDeErro(erros){
  var ul = document.querySelector('#mensagens-erro')
  ul.innerHTML = ''
  erros.forEach(function(erro){
    var li = document.createElement('li')
    li.textContent = erro
    ul.appendChild(li)
  })
}

function obtemPacienteDoFormulario(form){

  var paciente = {
    nome: form.nome.value,
    altura: form.altura.value,
    peso: form.peso.value,
    gordura: form.gordura.value,
    imc: calculaImc(this.peso, this.altura)
  }

  return paciente
}

function montaTr(paciente){
  // cria <tr>
  var pacienteTr = document.createElement('tr')
  pacienteTr.classList.add('paciente')
  // cria <td> e adicona as <td> na <tr>
  pacienteTr.appendChild(montaTd(paciente.nome, 'info-nome'))
  pacienteTr.appendChild(montaTd(paciente.peso, 'info-peso'))
  pacienteTr.appendChild(montaTd(paciente.altura, 'info-altura'))
  pacienteTr.appendChild(montaTd(paciente.gordura, 'info-gordura'))
  pacienteTr.appendChild(montaTd(paciente.imc, 'info-imc'))

  return pacienteTr
}

function montaTd(dado, classe){
  var td = document.createElement('td')
  td.textContent = dado
  td.classList.add(classe)

  return td
}


function validaPaciente(paciente){
  var erros = []

  if(paciente.nome.length == 0){
    erros.push('O campo nome está vazio!')
  }
  if(paciente.peso.length == 0){
    erros.push('O comapo peso está vazio!')
  }
  if(paciente.altura.length == 0){
    erros.push('O campo altura está vazio!')
  }
  if(!validaPeso(paciente.peso)){
    erros.push('O peso é inválido!')
  }
  if(!validaAltura(paciente.altura)){
    erros.push('A altura é inválida!')
  }
  if(paciente.gordura.length == 0){
    erros.push('O campo percentual de gordura está vazio!')
  }

  return erros
}
