const alunos = ['João', 'Juliana', 'Ana', 'Caio']
const medias = [10, 8, 7.5, 9]

const boletim = [alunos, medias]

function resultado(aluno){
  if(boletim[0].includes(aluno)){
    // const alunos = boletim[0]
    // const medias = boletim[1]
    const [alunos, medias] = boletim

    const indice = alunos.indexOf(aluno)
    const mediaAluno = medias[indice]

    console.log(`${aluno} tem a média ${mediaAluno}.`)
  }else{
    console.log("Aluno não encontrado.")
  }
}

resultado('Caio')
