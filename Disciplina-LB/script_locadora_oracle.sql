create database atv3;
use atv3;

/****** tabela "solta" ******/
create table filme_texto(
	filme_id smallint(6) not null auto_increment primary key,
    titulo varchar(255),
    descricao text
);

/****** tabelas sem foreign key ******/
create table ator(
	ator_id smallint(5) not null auto_increment primary key,
    primeiro_nome varchar(45),
    ultimo_nome varchar(45),
    ultima_atualizacao timestamp default now()
);

create table idioma(
	idioma_id tinyint(3) not null auto_increment primary key,
    nome char(20),
    ultima_atualizacao timestamp default now()
);

create table pais(
	pais_id smallint(5) not null auto_increment primary key,
    pais varchar(50),
    ultima_atualizacao timestamp default now()
);

create table categoria(
	categoria_id tinyint(3) not null auto_increment primary key,
    nome varchar(25),
    ultima_atualizacao timestamp default now()
);

/****** tabelas com uma foreign key ******/

create table cidade(
	cidade_id smallint(5) not null auto_increment primary key,
    cidade varchar(50), 
    pais_id smallint(5), 
    ultima_atualizacao timestamp default now(),
    constraint fk_pais foreign key (pais_id) references pais (pais_id)
);

create table endereco(
	endereco_id smallint(5) not null auto_increment primary key,
    endereco varchar(50),
    endereco2 varchar(50),
    bairro varchar(20),
    cidade_id smallint(5),
    cep varchar(10),
    telefone varchar(20),
    ultima_atualizacao timestamp default now(),
    constraint fk_cidade foreign key (cidade_id) references cidade (cidade_id)
);

create table loja(
	loja_id tinyint(3) not null auto_increment primary key,
    gerente_id tinyint(3),
    endereco_id smallint(5),
    ultima_atualizacao timestamp default now(),
    constraint fk_endereco foreign key (endereco_id) references endereco (endereco_id)
);

create table filme(
	filme_id smallint(5) not null auto_increment primary key,
    titulo varchar(255),
    descricao text,
    ano_de_lancamento year(4),
    idioma_id tinyint(3),
    idioma_original_id tinyint(3), /* não encontrei tabela com esse id*/
    duracao_da_locacao tinyint(3),
    preco_da_locacao decimal(4,2),
    duracao_do_filme smallint(5),
    custo_de_substituicao decimal(5,2),
    classificacao enum("livre","adulto"),
    recursos_especiais set("","",""),
    ultima_atualizacao timestamp default now(),
    constraint fk_idioma foreign key (idioma_id) references idioma (idioma_id)    
);

/****** tabela intermediária N:N ******/

create table filme_categoria(
	filme_id smallint(5),
    categoria_id tinyint(3),
    ultima_atualizacao timestamp default now(),
    constraint pk_filmecategoria primary key (filme_id, categoria_id),
    constraint fk_filme_n foreign key (filme_id) references filme (filme_id),
    constraint fk_categoria_n foreign key (categoria_id) references categoria (categoria_id)
);

create table filme_ator(
	filme_id smallint(5),
    ator_id smallint(5),
    ultima_atualizacao timestamp default now(),
    constraint pk_filmeator primary key (filme_id, ator_id),
    constraint fk_filme_n foreign key (filme_id) references filme (filme_id),
    constraint fk_ator_n foreign key (ator_id) references categoria (ator_id)
);

/****** tabelas com duas foreign key ******/

create table inventario(
	inventario_id mediumint(8) not null auto_increment primary key,
    filme_id smallint(5),
    loja_id tinyint(3),
    ultima_atualizacao timestamp default now(),
    constraint fk_filme foreign key (filme_id) references filme (filme_id),
    constraint fk_loja foreign key (loja_id) references loja (loja_id)
);

create table funcionario(
	funcionario_id tinyint(3) not null auto_increment primary key,
    primeiro_nome varchar(45),
    ultimo_nome varchar(45),
    endereco_id smallint(5),
    foto blob,
    email varchar(50),
    loja_id tinyint(3),
    ativo tinyint(1),
    usuario varchar(16),
    senha varchar(40),
    ultima_atualizacao timestamp default now(),
    constraint fk_endereco_funci foreign key (endereco_id) references endereco (endereco_id),
    constraint fk_loja_funci foreign key (loja_id) references loja (loja_id)
);

create table cliente(
	cliente_id smallint(5) not null auto_increment primary key,
    loja_id tinyint(3),
    primeiro_nome varchar(45),
    ultimo_nome varchar(45),
    email varchar(50),
    endereco_id smallint(5),
    ativo tinyint(1),
    data_criacao datetime,
    ultima_atualizacao timestamp default now(),
    constraint fk_endereco_cliente foreign key (endereco_id) references endereco (endereco_id),
    constraint fk_loja_cliente foreign key (loja_id) references loja (loja_id)
);

/****** tabelas com três foreign key ******/

create table aluguel(
	aluguel_id int(11) not null auto_increment primary key,
    data_de_aluguel datetime,
    inventario_id mediumint(8),
    cliente_id smallint(5),
    data_de_devolucao datetime,
    funcionario_id tinyint(3),
    ultima_atualizacao timestamp default now(),
    constraint fk_inventario foreign key (inventario_id) references inventario (inventario_id),
    constraint fk_cliente foreign key (cliente_id) references cliente (cliente_id),
    constraint fk_funcionario foreign key (funcionario_id) references funcionario (funcionario_id)
);

create table pagamento(
	pagamento_id smallint(5) not null auto_increment primary key,
    cliente_id smallint(5),
    funcionario_id tinyint(3),
    aluguel_id int(11),
    valor decimal(5,2),
    data_de_pagamento datetime,
    ultima_atualizacao timestamp default now(),
    constraint fk_aluguel foreign key (aluguel_id) references aluguel (aluguel_id),
    constraint fk_cliente_pag foreign key (cliente_id) references cliente (cliente_id),
    constraint fk_funcionario_pag foreign key (funcionario_id) references funcionario (funcionario_id)
);

