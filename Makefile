APP_NAME=hyper-hdr
HOST_PORT=8080
APP_PORT=8090
PROTO_PORT=19445
JSON_PORT=19444

build: ## Build the container
		docker build -t $(APP_NAME) .

run-hyper-hdr: ## Run container on port configured in `config.env`
	docker run -d \
		-p=$(HOST_PORT):$(APP_PORT) \
		-p=$(PROTO_PORT):$(PROTO_PORT) \
		-p=$(JSON_PORT):$(JSON_PORT) \
		--name="$(APP_NAME)" $(APP_NAME)

stop-hyper-hdr: ## Stop and remove a running container
		docker stop $(APP_NAME); docker rm $(APP_NAME)
