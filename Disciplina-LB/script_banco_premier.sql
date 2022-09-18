/*CRIAR O BANCO DE DADOS*/
CREATE DATABASE premierLeague;
USE premierLeague;

/*CRIAR TABELA GRUPO A*/
CREATE TABLE groupA(
	teamId int,
    firstName varchar(100),
    city varchar(100),
    age int
);

/*ADICIONAR CAMPO CAMPO NA TABELA GRUPO A*/
ALTER TABLE groupA
ADD mascot varchar(100);

/*EXCLUIR CAMPO DA TABELA GRUPO A*/
ALTER TABLE groupA
DROP COLUMN city;

/*ALTERAR TIPO E NOME ATRIBUTO*/
ALTER TABLE groupA
MODIFY firstName char(50);
ALTER TABLE groupA
change column firstName name char(50);

/*CRIAR TABELA GRUPO B*/
CREATE TABLE groupB(
	teamId int,
    firstName varchar(100),
    city varchar(100),
    age int
);

/*EXCLUIR TABELA GROUPA*/