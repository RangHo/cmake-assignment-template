FROM docker.io/library/ubuntu:latest AS builder

RUN apt update && apt install -y build-essential cmake

WORKDIR /app
COPY . .

RUN ./script/build.sh .

FROM docker.io/library/ubuntu:latest

WORKDIR /app
COPY --from=builder /app/build/assignment .
COPY --from=builder /app/script/entrypoint.sh .

ARG TIME_LIMIT=1s
ENV TIME_LIMIT=${TIME_LIMIT}

ENTRYPOINT ["/app/entrypoint.sh"]
