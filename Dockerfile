FROM docker.io/library/ubuntu:latest AS builder

RUN apt update && apt install -y build-essential cmake

WORKDIR /app

COPY . .

RUN ./script/build.sh .

FROM docker.io/library/ubuntu:latest

WORKDIR /app
COPY --from=builder /app/build/assignment .

ENTRYPOINT ["/app/assignment"]
