FROM ubuntu:latest

RUN apt-get update && \
  apt-get install -y build-essential

RUN mkdir /workspace

ADD ./workspace /workspace

WORKDIR /workspace
