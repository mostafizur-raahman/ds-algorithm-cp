.PHONY: push

push:
ifeq ($(BRANCH),)
	$(error BRANCH is not set. Usage: make push BRANCH=<branch_name> MSG="<commit_message>")
endif
ifeq ($(MSG),)
	$(error MSG is not set. Usage: make push BRANCH=<branch_name> MSG="<commit_message>")
endif
	@echo "Switching to branch $(BRANCH)..."
	@git checkout $(BRANCH) 2>/dev/null || git checkout -b $(BRANCH)
	@echo "Adding and committing changes..."
	@git add .
	@git commit -m "$(MSG)"
	@echo "Pushing to origin..."
	@git push -u origin $(BRANCH)