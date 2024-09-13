FROM ubuntu:latest

RUN apt-get update && apt-get install -y build-essential cmake git

WORKDIR /DOCKLOG

COPY . /DOCKLOG

RUN mkdir build && cd build && cmake .. && make

CMD ["./build/dock_log"]
