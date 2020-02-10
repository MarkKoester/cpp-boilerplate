FROM archlinux/base
RUN pacman -Syu --noconfirm cmake make gcc gdb git jq

WORKDIR /app
COPY requirements.json requirements.json
RUN pacman -Syu --noconfirm $(jq -r .dependencies[] requirements.json)
COPY . /app
