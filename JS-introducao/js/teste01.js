var titulo = document.querySelector('.titulo')
titulo.textContent = titulo.textContent + ' e alimentação!'


var pacientes = document.querySelectorAll(".paciente")


function calculaImc(paciente){
  for(let i = 0; i < paciente.length; i++){
    console.log(paciente[i])
    var tdPeso = paciente[i].querySelector('.info-peso')
    var peso = tdPeso.textContent

    var tdAltura = paciente[i].querySelector('.info-altura')
    var altura = tdAltura.textContent

    var tdImc = paciente[i].querySelector('.info-imc')

    var validaPeso = true
    var validaAltura = true

    if(peso <= 0 || peso >= 400){
      console.log('Peso inválido!')
      validaPeso = false
      tdImc.textContent = 'Peso inválido!'
    }
    if(altura <= 0 || altura >= 3.0){
      console.log('Altura inválida!')
      validaAltura = false
      tdImc.textContent = 'Altura inválida!'
    }

    if(validaPeso == true && validaAltura){
      var imc = peso / (altura * altura)
      tdImc.textContent = imc
    }
  }
}

calculaImc(pacientes)
