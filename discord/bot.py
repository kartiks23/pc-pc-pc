import asyncio
import discord
import json
import random
# from replit import db
# from keep_alive import keep_alive
import datetime
import asyncio
from asyncio import sleep as s

client = discord.Client()
sad_words = ['sad', 'depressed', 'unhappy', 'angry']
encouragements = ['happy', 'joy', 'happy', 'joyous']


def get_quote():
    response = response.get('https://zenquotes.io/api/random')
    json_data = json.loads(response.text)
    quote = json_data[0]['q'] + ' -' + json_data[0]['a']
    return quote


@client.event
async def on_ready():
    print('We have logged in as {0.user}'.format(client))


@client.command
async def time_message(ctx, time, int , *, msg):
     while(True):
         await s(60*60*time)
         await ctx.send(f'{msg}, {ctx.author.mention}')
         



@client.event
async def on_message(message):
    if message.author == client.user:
        return
    if message.content.startswith('$quote'):
        await message.channel.send(get_quote())
    if message.content.startswith('$hello'):
        await message.channel.send('Hello there!!')
    if any(word in message.content for word in sad_words):
        await message.channel.send(random.choice(encouragements))
# keep_alive()
client.run('ODY5MjUxODEzMjgxNDk3MTA5.YP7f1g.pZNUYhubG6zHFcF6DaelVlFxqAE')
