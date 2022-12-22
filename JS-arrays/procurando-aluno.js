const alunos = ['João', 'Juliana', 'Ana', 'Caio']
const medias = [10, 8, 7.5, 9]

const boletim = [alunos, medias]

function resultado(aluno){
  if(boletim[0].includes(aluno)){
    const indice = boletim[0].indexOf(aluno)
    const mediaAluno = boletim[1][indice]

    console.log(`${aluno} tem a média ${mediaAluno}.`)
  }else{
    console.log("Aluno não encontrado.")
  }
}

resultado('Ana')
