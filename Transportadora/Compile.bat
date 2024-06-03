@echo off

REM gera executavel
SET EXECUTAVEL=main.exe

REM compila
g++ -o %EXECUTAVEL% -s main.cpp Veiculo.cpp Cliente.cpp Pedido.cpp Carro.cpp Caminhao.cpp GerenciadorVeiculos.cpp Roteirizacao.cpp Dados.cpp ListaClientes.cpp ListaPedidos.cpp

REM verifica sucesso
IF %ERRORLEVEL% EQU 0 (
    echo Executavel criado!
    echo.
    %EXECUTAVEL%
) ELSE (
    echo Erro!
)

pause


