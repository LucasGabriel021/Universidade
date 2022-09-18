CREATE DATABASE banco;

use banco;

CREATE TABLE IF NOT EXISTS aluno (
	matricula int(11) not null auto_increment,
    nome varchar(50) null,
    idade int(11) null,
    primary key(matricula)
);

select * from  aluno;
insert into aluno values(0,'Pedro', 20);
insert into aluno values(0,'Maria', 18);
insert into aluno values(0,'Lucas', 19);
insert into aluno values(0,'Jose', null);
select nome from aluno where nome like 'm%';
select count(matricula) from aluno;
select max(idade) from aluno;
update aluno set idade = 18 where matricula = 1;
drop table aluno;

CREATE TABLE pessoa (
	id_pessoa int(7) not null auto_increment,
    nome varchar(33) null,
    cpf int(11) null,
    primary key(id_pessoa)
);

select * from  pessoa;
insert into pessoa values(1,'Lucas', 075);
insert into pessoa values(2,'Gabriel', 713);
insert into pessoa values(3,'Gerrard', 220);
insert into pessoa values(4,'Lampard', 920);
insert into pessoa values(6,'Keane', 333);

SHOW TABLES;