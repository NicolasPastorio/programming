<?php

$dadosEmString = [
  '{
    "pais": "Brasil",
    "medalhar":[{
      "ouro": 3,
      "prata": 5,
      "bronze": 3
    }]
  }',
  '{
    "pais": "Costa rica",
    "medalhas":[{
      "ouro": 5,
      "prata": 4,
      "bronze": 4
    }]
  }',
  '{
    "pais": "Estados unidos",
    "medalhas":[{
      "ouro": 4,
      "prata": 3,
      "bronze": 5
    }]
  }',
  '{
    "pais": "Trindade e tobago",
    "medalhas":[{
      "ouro": 4,
      "prata": 3,
      "bronze": 4
    }]
  }'
];
$dadosEmJson = json_decode($dadosEmString);
var_dump($dadosEmJson);

?>
