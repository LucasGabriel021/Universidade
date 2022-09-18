/*CRIAR BANCO DE DADOS DO SISTEMA*/
CREATE DATABASE store;
USE store;

/*CRIAR TABELA PRODUTO*/
CREATE TABLE product(
	id_product int NOT NULL,
    name_product varchar(100) NOT NULL,
    country_product varchar(100) NOT NULL,
    category_product varchar(100),
    PRIMARY KEY (id_product)
);

/*CRIAR TABELA VENDEDOR*/
CREATE TABLE seller(
	cnpj_seller int(8) NOT NULL,
    cpf_seller int(11),
    name_seller varchar(100),
    country_seller varchar(100),
    telephone_seller int(15) NOT NULL,
    PRIMARY KEY (cnpj_seller),
    CONSTRAINT personal_data UNIQUE (cpf_seller, telephone_seller)
);

ALTER TABLE seller
ADD CONSTRAINT verify_number CHECK (cnpj_seller = 8 AND cpf_seller = 11);

INSERT INTO seller
VALUES ('72637883', '87364739101', 'Lucas Gabriel', 'Brasília', '61992589940');
SELECT * FROM seller;
/*SHOW TABLES;*/

/*CRIAR TABELA PEDIDO*/
CREATE TABLE request(
	number_request int NOT NULL,
    name_request varchar(100) NOT NULL,
    recipient_request varchar(150) NOT NULL,
    country_request varchar(50),
    telephone_request int(15) NOT NULL,
    PRIMARY KEY (number_request),
    UNIQUE (telephone_request)
);

/*CRIAR TABELA CLIENTE*/
CREATE TABLE client_request(
	cpf_client int(11) NOT NULL,
    telephone_client int(15) NOT NULL,
    name_request varchar(100) NOT NULL,
    recipient_client varchar(150) NOT NULL,
    country_client varchar(50),
    PRIMARY KEY (cpf_client),
    UNIQUE (telephone_client)
);