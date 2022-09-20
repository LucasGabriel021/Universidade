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
    ano year(4),
    CONSTRAINT fk_aluno FOREIGN KEY(aluno_id) references aluno(aluno_id),
    CONSTRAINT fk_disciplina FOREIGN KEY(disc_id) references disciplina(disc_id)
);

CREATE TABLE disciplina(
	disc_id int(5) NOT NULL, 
    nome varchar(50) NOT NULL,
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
    CONSTRAINT fk_professor FOREIGN KEY(prof_id) references professor(prof_id),
    CONSTRAINT fk_disc FOREIGN KEY(disc_id) references disciplina(disc_id)
);

SHOW TABLES;

INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(1, 'Lucas Gabriel', 'Quadra 100', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(2, 'Gabriel', 'Quadra 101', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(3, 'Gabriela', 'Quadra 102', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(4, 'Gomez', 'Quadra 103', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(5, 'Galadriel', 'Quadra 104', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(6, 'Getulio', 'Quadra 105', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(7, 'Gavi', 'Quadra 106', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(8, 'Gonçalves', 'Quadra 107', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(9, 'Giovanni', 'Quadra 108', 'Ceilândia');
INSERT INTO aluno(aluno_id, nome, rua, cidade) VALUES(10, 'Germano', 'Quadra 109', 'Ceilândia');
SELECT * FROM aluno;

INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(1, 'Matemática', 5);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(2, 'Português', 9);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(3, 'Ciência da Computação', 8);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(4, 'Ciência da Computação', 2);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(5, 'Fisíca', 5);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(6, 'Química', 6);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(7, 'Biologia', 3);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(8, 'Ciência da Computação', 1);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(9, 'Artes', 4);
INSERT INTO disciplina(disc_id, nome, qtd_aulas) VALUES(10, 'Ciência da Computação', 3);
SELECT * FROM disciplina;

INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(1, 'Danilo', 'Qno 19', 'Brasília');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(2, 'Andressa', 'Qno 18', 'Ceilândia');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(3, 'Daniel', 'Qno 04', 'Samambaia');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(4, 'Abmael', 'Qno 20', 'Taguatinga');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(5, 'Neli', 'Qno 18', 'Águas Claras');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(6, 'Alex', 'Qno 19', 'Águas Lindas');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(7, 'Gabriela', 'Qno 30', 'Ceilândia');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(8, 'Jennifer', 'Qno 06', 'Guará');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(9, 'Diego', 'Qno 36', 'Asa Sul');
INSERT INTO professor(prof_id, nome, rua, cidade) VALUES(10, 'Cleber', 'Qno 19', 'Asa Norte');
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
SELECT disciplina.disc_id, disciplina.nome, matricula.disc_id, matricula.ano
FROM disciplina, matricula
WHERE disciplina.disc_id = matricula.disc_id AND matricula.ano = '2021';

/*PERGUNTA B*/
SELECT professor.prof_id, professor.nome, professor_disciplina.prof_id, professor_disciplina.disc_id, disciplina.disc_id, disciplina.nome
FROM professor, professor_disciplina, disciplina
WHERE professor.prof_id = professor_disciplina.prof_id AND professor_disciplina.disc_id = disciplina.disc_id AND disciplina.nome = 'Ciência da Computação';

/*PERGUNTA C*/
SELECT matricula.aluno_id, matricula.disc_id, matricula.ano, aluno.aluno_id, aluno.nome, aluno.cidade, disciplina.disc_id, disciplina.nome
FROM matricula, aluno, disciplina
WHERE matricula.aluno_id = aluno.aluno_id AND matricula.disc_id = disciplina.disc_id AND matricula.ano = '2021';