CREATE DATABASE banco_faculdade;
USE banco_faculdade;

CREATE TABLE aluno(
	aluno_id int(5) NOT NULL,
    nome varchar(50) NOT NULL,
    rua varchar(50),
    cidade varchar(50) NOT NULL,
    PRIMARY KEY(aluno_id)
);

CREATE TABLE matricula(
	aluno_id int(5) NOT NULL,
    disc_id int(5) NOT NULL,
    ano year,
    CONSTRAINT pk_mat PRIMARY KEY(aluno_id, disc_id),
    CONSTRAINT fk_aluno FOREIGN KEY(aluno_id) references aluno(aluno_id),
    CONSTRAINT fk_disciplina FOREIGN KEY(disc_id) references disciplina(disc_id)
);

CREATE TABLE disciplina(
	disc_id int(5) NOT NULL, 
    nome varchar(50) NOT NULL,
    nome_curso varchar(50) NOT NULL,
    qtd_aulas int(5) NOT NULL,
    PRIMARY KEY(disc_id)
);

CREATE TABLE professor(
	prof_id int(5) NOT NULL,
    nome varchar(50) NOT NULL,
    rua varchar(50),
    cidade varchar(50) NOT NULL,
	PRIMARY KEY(prof_id)
);

CREATE TABLE professor_disciplina(
	disc_id int(5) NOT NULL,
    prof_id int(5) NOT NULL,
    ano year,
    CONSTRAINT pk_prof_disc PRIMARY KEY(disc_id, prof_id),
    CONSTRAINT fk_professor FOREIGN KEY(prof_id) references professor(prof_id),
    CONSTRAINT fk_disc FOREIGN KEY(disc_id) references disciplina(disc_id)
);

SHOW TABLES;

INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(1, 'Lucas Gabriel', 'Quadra 100', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(2, 'Gabriel', 'Quadra 101', 'Brasília');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(3, 'Gabriela', 'Quadra 102', 'Brasília');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(4, 'Gomez', 'Quadra 103', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(5, 'Galadriel', 'Quadra 104', 'Brasília');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(6, 'Getulio', 'Quadra 105', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(7, 'Gavi', 'Quadra 106', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(8, 'Gonçalves', 'Quadra 107', 'Brasília');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(9, 'Giovanni', 'Quadra 108', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(10, 'Germano', 'Quadra 109', 'Ceilândia');
SELECT * FROM aluno;

INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(1, 'Matemática', 'Ciência da Computação', 50);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(2, 'Programção WEB', 'Ciência da Computação', 90);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(3, 'POO', 'Ciência da Computação', 80);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(4, 'Banco de Dados', 'Analíse de Sistemas', 20);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(5, 'Fisíca', 'Engenharia de Software', 50);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(6, 'Algoritimos', 'Analíse de Sistemas', 60);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(7, 'Arquitetura de Computadores', 'Analíse de Sistemas', 30);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(8, 'Banco de Dados', 'Ciência da Computação', 10);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(9, 'Algebra Linear', 'Ciência da Computação', 40);
INSERT INTO disciplina(disc_id, nome, nome_curso, qtd_aulas) VALUES(10, 'Banco de Dados', 'Engenharia de Software', 30);
SELECT * FROM disciplina;

INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(1, 'Danilo', 'Qno 19', 'Brasília');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(2, 'Andressa', 'Qno 18', 'Ceilândia');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(3, 'Daniel', 'Qno 04', 'Samambaia');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(4, 'Abmael', 'Qno 20', 'Taguatinga');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(5, 'Neli', 'Qno 18', 'Águas Claras');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(6, 'Alex', 'Qno 19', 'Águas Lindas');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(7, 'Gabriela', 'Qno 30', 'Ceilândia');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(8, 'Jennifer', 'Qno 06', 'Guará');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(9, 'Diego', 'Qno 36', 'Braília');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(10, 'Cleber', 'Qno 19', 'Brasília');
SELECT * FROM professor;

INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(1, 3, '2020');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(2, 4, '2020');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(3, 4, '2021');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(4, 1, '2021');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(5, 3, '2020');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(6, 3, '2020');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(7, 1, '2021');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(8, 6, '2020');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(9, 5, '2021');
INSERT INTO matricula(aluno_id, disc_id, ano) VALUES(10, 9, '2020');
SELECT * FROM matricula;

INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(1, 1, '2021');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(2, 2, '2020');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(3, 3, '2021');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(4, 4, '2020');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(5, 5, '2021');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(6, 6, '2021');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(7, 7, '2020');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(8, 8, '2021');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(9, 9, '2021');
INSERT INTO professor_disciplina(disc_id, prof_id, ano) VALUES(10, 10, '2021');
SELECT * FROM professor_disciplina;

/*PERGUNTA A*/
/*
	disc_id int(5) NOT NULL, 
    nome varchar(50) NOT NULL,
    qtd_aulas int(5) NOT NULL,
    
    disc_id int(5) NOT NULL,
    prof_id int(5) NOT NULL,
    ano year,
*/
SELECT disciplina.disc_id, disciplina.nome FROM disciplina
INNER JOIN professor_disciplina ON
disciplina.disc_id = professor_disciplina.disc_id
WHERE ano = '2021';

/*PERGUNTA B*/
SELECT professor.nome AS "prof_nome" FROM professor_disciplina 
INNER JOIN professor ON
professor_disciplina.prof_id = professor.prof_id
WHERE professor_disciplina.disc_id = 2;

/*PERGUNTA C*/
SELECT aluno.nome, aluno.cidade, disciplina.nome AS 'disciplina', matricula.ano FROM aluno
INNER JOIN matricula ON aluno.aluno_id = matricula.aluno_id
INNER JOIN disciplina ON matricula.disc_id = disciplina.disc_id 
WHERE ano = '2021';

/*PERGUNTA D*/
SELECT aluno.aluno_id, aluno.nome FROM aluno 
INNER JOIN matricula ON
matricula.aluno_id = aluno.aluno_id
WHERE cidade = "Brasília" AND matricula.disc_id = 3;
SELECT * FROM matricula;

/*PERGUNTA E*/
SELECT professor.nome, disciplina.qtd_aulas, AVG(disciplina.qtd_aulas) AS media_aulas FROM professor
INNER JOIN professor_disciplina ON
professor.prof_id = professor_disciplina.prof_id
INNER JOIN disciplina ON
professor_disciplina.disc_id = disciplina.disc_id 
GROUP BY nome;
