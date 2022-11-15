# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 19:33:49 by ldione            #+#    #+#              #
#    Updated: 2022/10/15 19:57:46 by ldione           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#компилятор и линковщик
CC          := clang++

#цвета
GREEN 				=	\033[0;32m
RED					=	\033[0;31m
RESET				=	\033[0m

#цель проекта
NAME     := harlFilter

#директории всякие (если нет нужной, то ставь .)
#также можно поддиректории, есть поиск нужных файлов с .cpp расширением
SRCDIR      := .
INCDIR      := .
BUILDDIR    := objects
TARGETDIR   := bin
RESDIR      :=
SRCEXT      := cpp
DEPEXT      := d
OBJEXT      := o

#флаги, библиотеки
CFLAGS      :=  -Wall -Wextra -Werror -std=c++98
LIB         :=
INC         := -I$(INCDIR)
INCDEP      := -I$(INCDIR)


SOURCES     := $(shell find $(SRCDIR) -type f -name '*.$(SRCEXT)')
OBJECTS     := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

CHECK_NAME	:= ./$(TARGETDIR)/$(NAME)
SRC_COUNT_TOT := $(shell expr $(shell echo -n $(SOURCES) | wc -w) - $(shell ls -l $(BUILDDIR) 2>&1 | grep ".o" | wc -l))
ifeq ($(shell test $(SRC_COUNT_TOT) -le 0; echo $$?),0)
	SRC_COUNT_TOT = $(shell expr $(shell echo -n $(SOURCES) | wc -w) - 1)
endif
SRC_COUNT	:= 0
SRC_PCT = $(shell expr 100 \* $(SRC_COUNT) / $(SRC_COUNT_TOT))
PRINTF = LC_NUMERIC="en_US.UTF-8" printf


all: resources $(CHECK_NAME)

re: fclean all

#скопировать из рес в таргет папку
resources: directories
#@cp $(RESDIR)/* $(TARGETDIR)/

directories:
	@mkdir -p $(TARGETDIR)
	@mkdir -p $(BUILDDIR)

clean:
	@$(RM) -rf $(BUILDDIR)
	@echo "$(NAME): $(RED)Okay, you're right, it was worth removing$(RESET)"

fclean: clean
	@$(RM) -rf $(TARGETDIR)
	@echo "$(NAME): $(RED)after everything that happened between us, you just deleted me?🤬$(RESET)"

#настройка зависимостей
-include $(OBJECTS:.$(OBJEXT)=.$(DEPEXT))

#линковка
$(CHECK_NAME): $(OBJECTS)
	@$(CC) -o $(TARGETDIR)/$(NAME) $^ $(LIB)
	@echo "$(GREEN)\ngood boy.$(RESET)"

#компиляция
$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INC) -c -o $@ $<
	@$(eval SRC_COUNT = $(shell expr $(SRC_COUNT) + 1))
	@$(PRINTF) "\r%100s\r[ %d/%d (%d%%) ] Compiling $(GREEN)$<$(RESET)..." "" $(SRC_COUNT) $(SRC_COUNT_TOT) $(SRC_PCT)
	@$(CC) $(CFLAGS) $(INCDEP) -MM $(SRCDIR)/$*.$(SRCEXT) > $(BUILDDIR)/$*.$(DEPEXT)
	@cp -f $(BUILDDIR)/$*.$(DEPEXT) $(BUILDDIR)/$*.$(DEPEXT).tmp
	@sed -e 's|.*:|$(BUILDDIR)/$*.$(OBJEXT):|' < $(BUILDDIR)/$*.$(DEPEXT).tmp > $(BUILDDIR)/$*.$(DEPEXT)
	@sed -e 's/.*://' -e 's/\\$$//' < $(BUILDDIR)/$*.$(DEPEXT).tmp | fmt -1 | sed -e 's/^ *//' -e 's/$$/:/' >> $(BUILDDIR)/$*.$(DEPEXT)
	@rm -f $(BUILDDIR)/$*.$(DEPEXT).tmp

#фоня
.PHONY: all re clean fclean resources