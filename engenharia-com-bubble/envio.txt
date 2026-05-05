LINK DO APLICATIVO

https://pdrstrb-83182.bubbleapps.io/version-test



O sistema de Gerenciamento de Orcamentos foi gerado com o recurso "Create with AI" do Bubble.io e refinado manualmente com engenharia de software. A aplicacao conta com Data Types (Quote, Client, Budget, User), Option Sets para status, regras de privacidade (Data > Privacy) e workflows organizados por pagina.



ESTRATEGIA DE SAIDA - Como exportar os dados do Bubble

O Bubble oferece duas formas de extrair os dados para eventual migracao:



a) EXPORTACAO MANUAL VIA PAINEL: Na aba "Data" do editor, e possivel usar o botao "Download" em cada tabela (Quote, Client, Budget) para exportar registros em CSV. Os arquivos podem ser importados em qualquer banco relacional (PostgreSQL, MySQL) via ETL.



b) EXPORTACAO PROGRAMATICA VIA DATA API (recomendada): O Bubble disponibiliza uma API REST nativa habilitada em Settings > API > Enable Data API. Com endpoints no formato GET https://pdrstrb-83182.bubbleapps.io/api/1.1/obj/quote, e possivel iterar todas as paginas de resultado com parametros "cursor" e "limit" e salvar em JSON ou CSV. A migracao para outro backend (Node.js + PostgreSQL, Django) se resume a: (a) exportar registros via API, (b) mapear campos para o novo schema, (c) importar com script de seed e (d) atualizar URLs do frontend.



LIMITACOES: Arquivos de midia precisam ser baixados separadamente. Os Workflows precisam ser reimplementados na nova plataforma com base na documentacao. Recomenda-se backup mensal via Data API.